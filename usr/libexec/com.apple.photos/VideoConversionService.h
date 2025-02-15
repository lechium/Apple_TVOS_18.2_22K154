//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MediaConversionQueue, NSString, NSXPCListener;

@interface VideoConversionService : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
    MediaConversionQueue *_requestQueue;	// 16 = 0x10
}

+ (void)_forceCrashAfterVideoConversionHangDetectedWithMarker;	// IMP=0x002000000001f0bb
+ (id)resourceURLCollectionForDestinationBookmarkDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001ef99
+ (void)run;	// IMP=0x001000000001ef6c
- (void).cxx_destruct;	// IMP=0x002000000001e8b1
@property(retain) MediaConversionQueue *requestQueue; // @synthesize requestQueue=_requestQueue;
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
- (CDUnknownBlockType)connectionTerminationEventHandlerForConnectionIdentifier:(id)arg1 eventDescription:(id)arg2;	// IMP=0x001000000001e784
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000001e3e6
- (void)requestStatusWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000001e30b
- (void)cancelJobsForConnectionWithIdentifier:(id)arg1;	// IMP=0x001000000001e2bb
- (void)cancelJobWithIdentifier:(id)arg1;	// IMP=0x001000000001e2a5
- (void)modifyJobWithIdentifier:(id)arg1 modifications:(id)arg2;	// IMP=0x001000000001e152
- (void)extractStillImageFromVideoAtSourceBookmarkDictionary:(id)arg1 toDestinationBookmarkDictionary:(id)arg2 options:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000001e0a5
- (void)singlePassConvertVideoAtSourceBookmarkDictionary:(id)arg1 toDestinationBookmarkDictionary:(id)arg2 options:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000001dff8
- (void)generateGIFForVideoAtSourceBookmarkDictionary:(id)arg1 toDestinationBookmarkDictionary:(id)arg2 options:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000001df4b
- (void)convertVideoAtSourceBookmarkDictionary:(id)arg1 toDestinationBookmarkDictionary:(id)arg2 options:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000001ddbc
- (void)echo:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001dd59
- (void)conversionQueue:(id)arg1 cancelCurrentlyProcessingEntry:(id)arg2;	// IMP=0x001000000001dc00
- (void)conversionQueue:(id)arg1 processNextEntry:(id)arg2;	// IMP=0x001000000001d3a8
- (void)conversionQueue:(id)arg1 didCancelQueuedEntry:(id)arg2 clientRequests:(id)arg3;	// IMP=0x001000000001d00a
- (_Bool)optionsRequirePhotosAdjustmentProcessing:(id)arg1;	// IMP=0x001000000001cfcd
- (void)performConversionOfClass:(Class)arg1 forSourceBookmarkDictionary:(id)arg2 destinationBookmarkDictionary:(id)arg3 options:(id)arg4 replyHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000001c2ef
- (void)run;	// IMP=0x001000000001c23a
- (id)init;	// IMP=0x001000000001c1d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

