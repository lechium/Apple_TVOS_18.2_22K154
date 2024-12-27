//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntent.h>

@class NSArray, NSNumber;

@interface PauseMediaIntent : INIntent
{
}

+ (_Bool)shouldSkipDefaultSchemaCheck;	// IMP=0x00000000001ed4d9
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;	// IMP=0x00000000001f56b9
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;	// IMP=0x00000000001f54d0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001f53cc
- (id)init;	// IMP=0x00000000001f5338

// Remaining properties
@property(nonatomic, copy) NSArray *deviceContext; // @dynamic deviceContext;
@property(nonatomic, copy) NSArray *deviceQueries; // @dynamic deviceQueries;
@property(nonatomic, copy) NSArray *devices; // @dynamic devices;
@property(nonatomic, retain) NSNumber *isDirectInvocation; // @dynamic isDirectInvocation;
@property(nonatomic) long long mediaType; // @dynamic mediaType;
@property(nonatomic, copy) NSArray *settingAttributes; // @dynamic settingAttributes;

@end

