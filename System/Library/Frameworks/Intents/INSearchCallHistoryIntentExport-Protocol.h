//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INDateComponentsRange, INPerson, NSNumber;

@protocol INSearchCallHistoryIntentExport <NSObject, JSExport>
@property(copy, nonatomic) NSNumber *unseen;
@property(nonatomic) long long preferredCallProvider;
@property(nonatomic) unsigned long long callTypes;
@property(nonatomic) unsigned long long callCapabilities;
@property(copy, nonatomic) INPerson *recipient;
@property(copy, nonatomic) INDateComponentsRange *dateCreated;
- (id)init;
@end

