//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "IDSPipelineParameter-Protocol.h"

@class IDSRegistrationProperties, NSArray, NSString;

@protocol IDSMadridEndpointFilterParameter <IDSPipelineParameter>
- (void)setEndpoints:(NSArray *)arg1;
- (NSArray *)endpoints;
- (IDSRegistrationProperties *)registrationProperties;
- (void (^)(NSArray *, NSArray *, NSDictionary *))willSendBlock;
- (_Bool)sendOnePerToken;
- (NSString *)service;
- (NSString *)fromID;
- (NSString *)guid;
@end

