#include <iostream>
#include <memory>
#include <string>

#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>

#include "recsys/protos/rec_service.grpc.pb.h"

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;
using recsys::RecService;
using recsys::RecRequest;
using recsys::RecResponse;
using recsys::Item;

// Logic and data behind the server's behavior.
class RecServiceImpl final : public RecService::Service {
  Status GetRecItems(ServerContext* context, const RecRequest* request,
                  RecResponse* response) override {
    response->set_seq(request->seq());
    Item item;
    item.set_id(0xdeadbeef);
    for (int i = 0; i < 2; ++i) {
        auto item = response->add_item_list();
        item->set_id(i+1);
    }
    
    return Status::OK;
  }
};

void RunServer() {
  std::string server_address("127.0.0.1:50051");
  RecServiceImpl service;

  grpc::EnableDefaultHealthCheckService(true);
  grpc::reflection::InitProtoReflectionServerBuilderPlugin();
  ServerBuilder builder;
  // Listen on the given address without any authentication mechanism.
  builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
  // Register "service" as the instance through which we'll communicate with
  // clients. In this case it corresponds to an *synchronous* service.
  builder.RegisterService(&service);
  // Finally assemble the server.
  std::unique_ptr<Server> server(builder.BuildAndStart());
  std::cout << "Server listening on " << server_address << std::endl;

  // Wait for the server to shutdown. Note that some other thread must be
  // responsible for shutting down the server for this call to ever return.
  server->Wait();
}

int main(int argc, char** argv) {
  RunServer();

  return 0;
}