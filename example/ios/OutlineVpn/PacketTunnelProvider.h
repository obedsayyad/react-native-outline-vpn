//
//  PacketTunnelProvider.h
//  OutlineVpn
//
//  Created by Zafer ATLI on 16.03.2025.
//

#ifndef PacketTunnelProvider_h
#define PacketTunnelProvider_h

@import NetworkExtension;


@interface PacketTunnelProvider : NEPacketTunnelProvider
@property (nonatomic, strong) NSDictionary *vpnConfig;
// This must be kept in sync with:
//  - cordova-plugin-outline/apple/src/OutlineVpn.swift#ErrorCode
//  - www/model/errors.ts
typedef NS_ENUM(NSInteger, ErrorCode) {
  noError = 0,
  undefinedError = 1,
  vpnPermissionNotGranted = 2,
  invalidServerCredentials = 3,
  udpRelayNotEnabled = 4,
  serverUnreachable = 5,
  vpnStartFailure = 6,
  illegalServerConfiguration = 7,
  shadowsocksStartFailure = 8,
  configureSystemProxyFailure = 9,
  noAdminPermissions = 10,
  unsupportedRoutingTable = 11,
  systemMisconfigured = 12
};

@end

#endif /* PacketTunnelProvider_h */
