//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDictionary, NSString, RMConfigurationPayload;

@interface RMConfigurationPayloadState : NSManagedObject
{
}


// Remaining properties
@property(nonatomic) _Bool active; // @dynamic active;
@property(retain, nonatomic) RMConfigurationPayload *configuration; // @dynamic configuration;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSDictionary *error; // @dynamic error;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

