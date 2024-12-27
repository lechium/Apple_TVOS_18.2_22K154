//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, SCContentFilter, SCStream, VCScreenCapturePicker, VCScreenShare;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCScreenCaptureManager : NSObject
{
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;	// 8 = 0x8
    NSMutableDictionary *_screenShare;	// 16 = 0x10
    VCScreenShare *_pickerClientScreenShare;	// 24 = 0x18
    VCScreenCapturePicker *_picker;	// 32 = 0x20
    SCContentFilter *_contentFilter;	// 40 = 0x28
    SCStream *_screenStream;	// 48 = 0x30
}

+ (long long)contentTypeForFilter:(id)arg1;	// IMP=0x00100000002d5d8b
+ (id)sharedManager;	// IMP=0x00100000002d4860
@property(retain, nonatomic) SCStream *screenStream; // @synthesize screenStream=_screenStream;
@property(readonly, nonatomic) SCContentFilter *contentFilter; // @synthesize contentFilter=_contentFilter;
@property(readonly, nonatomic) VCScreenCapturePicker *picker; // @synthesize picker=_picker;
- (void)pickerCancelled:(id)arg1 forStream:(id)arg2;	// IMP=0x00000000002d5db4
- (void)picker:(id)arg1 pickedContentFilter:(id)arg2 forStream:(id)arg3 error:(id)arg4;	// IMP=0x00000000002d5dae
- (_Bool)shouldUpdateFilter:(id)arg1;	// IMP=0x00000000002d5da6
- (id)updateCurrentPickerScreenCapture;	// IMP=0x00000000002d5d9e
- (id)attributesForContentFilter:(id)arg1;	// IMP=0x00000000002d5d96
- (id)errorForAttributesError:(id)arg1;	// IMP=0x00000000002d5a16
- (void)endPrivacyAccountingInterval:(id)arg1;	// IMP=0x00000000002d5a10
- (void)startPrivacyAccountingInterval:(id)arg1;	// IMP=0x00000000002d5a0a
- (void)registerBlocksForService;	// IMP=0x00000000002d5a04
- (void)invalidatePicker;	// IMP=0x00000000002d59d1
- (void)createPicker;	// IMP=0x00000000002d5952
- (id)updateScreenCapture:(id)arg1 withConfig:(id)arg2;	// IMP=0x00000000002d594a
- (id)startScreenShare:(id)arg1;	// IMP=0x00000000002d5942
- (id)stopScreenShareAndNotifyDelegate:(id)arg1;	// IMP=0x00000000002d5560
- (id)stopScreenShare:(id)arg1;	// IMP=0x00000000002d5558
- (void)removePickerClientScreenShare:(id)arg1;	// IMP=0x00000000002d5531
- (id)newScreenShareWithConfig:(id)arg1 pid:(id)arg2;	// IMP=0x00000000002d52fa
- (_Bool)isPickerClientProcessId:(id)arg1;	// IMP=0x00000000002d51c7
- (id)newCaptureSourceID;	// IMP=0x00000000002d506d
- (id)screenShareDictionary:(id)arg1;	// IMP=0x00000000002d4d3d
- (void)screenCaptureStopFor:(id)arg1 didSucceed:(_Bool)arg2 withError:(id)arg3;	// IMP=0x00000000002d4bca
- (void)screenCaptureStartFor:(id)arg1 didSucceed:(_Bool)arg2 withError:(id)arg3;	// IMP=0x00000000002d4a56
- (id)getErrorDictionaryFromError:(id)arg1;	// IMP=0x00000000002d48fc
- (void)dealloc;	// IMP=0x00000000002d486a
- (id)init;	// IMP=0x00000000002d4686

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

