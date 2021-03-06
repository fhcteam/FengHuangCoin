// Copyright (c) 2009-2012 Bitcoin Developers
// Copyright (c) 2011-2016 Peercoin (PPCoin) Developers
// Copyright (c)      2017 FHCoin Team
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef BITCOIN_VERSION_H
#define BITCOIN_VERSION_H

#include <string>

//
// client versioning
//

// These need to be macro's, as version.cpp's voodoo requires it
#define CLIENT_VERSION_MAJOR       0
#define CLIENT_VERSION_MINOR       6
#define CLIENT_VERSION_REVISION    3
#define CLIENT_VERSION_BUILD       0

static const int CLIENT_VERSION =
                           1000000 * CLIENT_VERSION_MAJOR
                         +   10000 * CLIENT_VERSION_MINOR 
                         +     100 * CLIENT_VERSION_REVISION
                         +       1 * CLIENT_VERSION_BUILD;

extern const std::string CLIENT_NAME;
extern const std::string CLIENT_BUILD;
extern const std::string CLIENT_DATE;

// fhcoin version - intended for display purpose ONLY
#define FHCOIN_VERSION_MAJOR       0
#define FHCOIN_VERSION_MINOR       5
#define FHCOIN_VERSION_REVISION    4
#define FHCOIN_VERSION_BUILD       0

static const int FHCOIN_VERSION =
                           1000000 * FHCOIN_VERSION_MAJOR
                         +   10000 * FHCOIN_VERSION_MINOR
                         +     100 * FHCOIN_VERSION_REVISION
                         +       1 * FHCOIN_VERSION_BUILD;

//
// network protocol versioning
//

static const int PROTOCOL_VERSION = 60006;

// earlier versions not supported as of Feb 2012, and are disconnected
// NOTE: as of bitcoin v0.6 message serialization (vSend, vRecv) still
// uses MIN_PROTO_VERSION(209), where message format uses PROTOCOL_VERSION
static const int MIN_PROTO_VERSION = 209;

// nTime field added to CAddress, starting with this version;
// if possible, avoid requesting addresses nodes older than this
static const int CADDR_TIME_VERSION = 31402;

// only request blocks from nodes outside this range of versions
static const int NOBLKS_VERSION_START = 32000;
static const int NOBLKS_VERSION_END = 32400;

// BIP 0031, pong message, is enabled for all versions AFTER this one
static const int BIP0031_VERSION = 60000;

#endif
