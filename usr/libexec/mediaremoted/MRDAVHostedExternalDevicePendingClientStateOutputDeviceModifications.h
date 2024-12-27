//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MRDAVHostedExternalDevicePendingClientStateOutputDeviceModifications : NSObject
{
    NSMutableArray *_addedOutputDevices;	// 8 = 0x8
    NSMutableArray *_changedOutputDevices;	// 16 = 0x10
    NSMutableArray *_removedOutputDevices;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000045eb3
@property(retain, nonatomic) NSMutableArray *removedOutputDevices; // @synthesize removedOutputDevices=_removedOutputDevices;
@property(retain, nonatomic) NSMutableArray *changedOutputDevices; // @synthesize changedOutputDevices=_changedOutputDevices;
@property(retain, nonatomic) NSMutableArray *addedOutputDevices; // @synthesize addedOutputDevices=_addedOutputDevices;
- (void)removeOutputDevice:(id)arg1;	// IMP=0x0010000000045db1
- (void)changeOutputDevice:(id)arg1;	// IMP=0x0010000000045d1b
- (void)addOutputDevice:(id)arg1;	// IMP=0x0010000000045c94
- (id)description;	// IMP=0x0010000000045b67

@end

