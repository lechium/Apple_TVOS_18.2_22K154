//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSXPCConnection.h>

@class NSData, NSString;

@interface NSXPCConnection (storekitd)
@property(nonatomic, readonly) _Bool sk_connectionIsOctaneService;
@property(nonatomic, readonly) NSData *sk_auditTokenData;
@property(nonatomic, readonly) NSString *sk_processName;
@property(nonatomic, readonly) NSString *sk_executablePath;
@property(nonatomic, readonly) NSString *sk_clientID;
@property(nonatomic, readonly) _Bool sk_getTaskAllowed;
@property(nonatomic, readonly) _Bool sk_isOctanePrivileged;
@property(nonatomic, readonly) _Bool sk_allowPaymentRequestData;
@property(nonatomic, readonly) _Bool sk_allowClientOverride;
@property(nonatomic, readonly) _Bool sk_allowArcade;
@end

