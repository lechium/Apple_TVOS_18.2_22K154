//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/NSObject-Protocol.h>

@class NSArray, NSData, NSString, NSURL;
@protocol CoreDAVAccountInfoProvider;

@protocol CoreDAVLeafDataPayload <NSObject>
@property(readonly, nonatomic) NSString *syncKey;
@property(readonly, nonatomic) NSData *dataPayload;
@property(retain, nonatomic) NSURL *serverID;
- (id)initWithURL:(NSURL *)arg1 eTag:(NSString *)arg2 dataPayload:(NSData *)arg3 inContainerWithURL:(NSURL *)arg4 withAccountInfoProvider:(id <CoreDAVAccountInfoProvider>)arg5;

@optional
@property(retain, nonatomic) NSURL *destinationURL;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSURL",?,&,N

@property(retain, nonatomic) NSURL *sourceURL;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSURL",?,&,N

@property(readonly, nonatomic) NSArray *childrenOrder;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,N

@end

