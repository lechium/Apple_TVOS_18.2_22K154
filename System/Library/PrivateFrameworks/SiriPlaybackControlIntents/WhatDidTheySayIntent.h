//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntent.h>

@class Device, NSArray, NSDate;

@interface WhatDidTheySayIntent : INIntent
{
}

+ (_Bool)shouldSkipDefaultSchemaCheck;	// IMP=0x00600000001ed539
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;	// IMP=0x00000000001fb4d1
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;	// IMP=0x00000000001fb2e8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001fb1e4
- (id)init;	// IMP=0x00000000001fb150

// Remaining properties
@property(nonatomic, retain) Device *device; // @dynamic device;
@property(nonatomic, copy) NSArray *deviceContext; // @dynamic deviceContext;
@property(nonatomic, copy) NSDate *startTime; // @dynamic startTime;

@end

