//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ACLSNetworkUtilities : NSObject
{
}

+ (_Bool)areDigestedIdentifiers:(id)arg1 equalToCleartextIdentifiers:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x0040000000006894
+ (_Bool)isDigestedIdentifier:(id)arg1 equalToCleartextIdentifier:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x001000000000652f
+ (id)digestIdentifiers:(id)arg1 tag:(unsigned int)arg2;	// IMP=0x001000000000633f
+ (id)digestIdentifier:(id)arg1 tag:(unsigned int)arg2;	// IMP=0x001000000000606c
+ (_Bool)makeLocalAddresses:(id *)arg1 andGatewayIdentifiers:(id *)arg2 tag:(unsigned int)arg3;	// IMP=0x0010000000004a01
+ (id)stringFromSockaddrStorage:(const struct sockaddr_storage *)arg1;	// IMP=0x0010000000004993
+ (id)stringFromSockaddrDL:(const struct sockaddr_dl *)arg1;	// IMP=0x0010000000004862
+ (id)stringFromSockaddr6:(const struct sockaddr_in6 *)arg1;	// IMP=0x001000000000484c
+ (id)stringFromSockaddr4:(const struct sockaddr_in *)arg1;	// IMP=0x0010000000004836
+ (id)stringFromMacAddr:(char *)arg1;	// IMP=0x00100000000047e8
+ (id)stringFromInaddr6:(const struct in6_addr *)arg1;	// IMP=0x0010000000004760
+ (id)stringFromInaddr4:(const struct in_addr *)arg1;	// IMP=0x00100000000046e0
+ (id)serviceIDFromKey:(id)arg1;	// IMP=0x00100000000045e6
+ (_Bool)isWiredNetworkInterfaceType:(id)arg1;	// IMP=0x0010000000004514
+ (_Bool)isAutomaticConfigMethod6:(id)arg1;	// IMP=0x00100000000044f5
+ (_Bool)isAutomaticConfigMethod4:(id)arg1;	// IMP=0x0010000000004434
+ (_Bool)isManualConfigMethod6:(id)arg1;	// IMP=0x0010000000004415
+ (_Bool)isManualConfigMethod4:(id)arg1;	// IMP=0x00100000000043f6
+ (_Bool)isUsefulInaddr6:(const struct in6_addr *)arg1;	// IMP=0x00100000000043ab
+ (_Bool)isUsefulInaddr4:(const struct in_addr *)arg1;	// IMP=0x0010000000004385
+ (_Bool)isUsefulSockaddr6:(const struct sockaddr_in6 *)arg1;	// IMP=0x001000000000436f
+ (_Bool)isUsefulSockaddr4:(const struct sockaddr_in *)arg1;	// IMP=0x0010000000004359
+ (_Bool)isShareableInaddr6:(const struct in6_addr *)arg1;	// IMP=0x0010000000004326
+ (_Bool)isShareableInaddr4:(const struct in_addr *)arg1;	// IMP=0x00100000000042eb
+ (_Bool)isShareableSockaddr6:(const struct sockaddr_in6 *)arg1;	// IMP=0x00100000000042d5
+ (_Bool)isShareableSockaddr4:(const struct sockaddr_in *)arg1;	// IMP=0x00100000000042bf
+ (id)createNetworkInterface:(struct __SCNetworkInterface *)arg1 service:(struct __SCNetworkService *)arg2 configInfo:(id)arg3;	// IMP=0x0010000000003cce
+ (double)speedFromEthernetMediaSubType:(id)arg1;	// IMP=0x0010000000003c3d
+ (id)allActiveNetworkInterfaces;	// IMP=0x0010000000002a3b
+ (id)netmask4ContainingStartAddress:(id)arg1 endAddress:(id)arg2;	// IMP=0x00100000000028f4
+ (_Bool)hasUsefulUSBEthernetInterface;	// IMP=0x001000000000275d

@end

