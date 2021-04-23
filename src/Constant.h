/*
 * Copyright (c) 2013-2016 Cisco Systems, Inc. and others.  All rights reserved.
 * Copyright (c) 2019 Lumin Shi.  All rights reserved.
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License v1.0 which accompanies this distribution,
 * and is available at http://www.eclipse.org/legal/epl-v10.html
 *
 */

#ifndef OPENBMP_CONSTANT_H
#define OPENBMP_CONSTANT_H

#define WORKER_STATUS_WAITING 1
#define WORKER_STATUS_RUNNING 2
#define WORKER_STATUS_STOPPED 3

//#define WORKER_BUF_REFILL_SIZE 1500
#define WORKER_BUF_REFILL_SIZE 8192
#define BMP_MSG_BUF_SIZE 70000
#define ENCAPSULATOR_BUF_SIZE 20000

/*
 * BINARY HEADER VERSION 1.7
 */
// header constants
#define BINARY_HDR_MAGIC_NUMBER 0x4F424D50
#define BINARY_HDR_MAJOR_VERSION 1
#define BINARY_HDR_MINOR_VERSION 7
#define BINARY_HDR_MSG_TYPE_COLLECTOR 0
#define BINARY_HDR_MSG_TYPE_BMP_RAW 12

// define the length of each field in the binary header
#define BINARY_HDR_MAGIC_NUMBER_SIZE 4
#define BINARY_HDR_MAJOR_VERSION_SIZE 1
#define BINARY_HDR_MINOR_VERSION_SIZE 1
#define BINARY_HDR_HDR_LEN_SIZE 2
#define BINARY_HDR_BMP_MSG_LEN_SIZE 4
#define BINARY_HDR_FLAG_SIZE 1
#define BINARY_HDR_TYPE_SIZE 1
#define BINARY_HDR_TIMESTAMP_SEC_SIZE 4
#define BINARY_HDR_TIMESTAMP_USEC_SIZE 4
#define BINARY_HDR_COLLECTOR_HASH_SIZE 16
#define BINARY_HDR_COLLECTOR_NAME_LEN_SIZE 2
#define BINARY_HDR_ROUTER_HASH_SIZE 16
#define BINARY_HDR_ROUTER_IP_SIZE 16
#define BINARY_HDR_ROUTER_GROUP_LEN_SIZE 2
#define BINARY_HDR_ROW_COUNT_SIZE 4


#define ROUTER_GROUP_UNDEFINED_STRING "UNDEFINED_ROUTER_GROUP"
#define PEER_GROUP_UNDEFINED_STRING "UNDEFINED_PEER_GROUP"

#endif //OPENBMP_CONSTANT_H
