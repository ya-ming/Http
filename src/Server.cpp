/**
 * @file Server.cpp
 *
 * This module contains the implementation of the Http::Server class.
 *
 */

#include <Http/Server.hpp>

namespace Http {

    /**
     * This contains the private properties of a Server instance.
     */
    struct Server::Impl {

    };

    Server::~Server() = default;

    Server::Server()
        :impl_(new Impl)
    {

    }
}
