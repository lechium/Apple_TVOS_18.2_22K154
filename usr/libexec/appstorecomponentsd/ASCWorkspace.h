//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue, NSRecursiveLock;

@interface ASCWorkspace : NSObject
{
    _Bool _extension;	// 8 = 0x8
    NSMutableDictionary *_pendingResults;	// 16 = 0x10
    NSOperationQueue *_openApplicationOperationQueue;	// 24 = 0x18
    NSRecursiveLock *_stateLock;	// 32 = 0x20
}

+ (void)withSharedWorkspace:(id)arg1 perform:(CDUnknownBlockType)arg2;	// IMP=0x002000000002a7f7
+ (id)sharedWorkspace;	// IMP=0x001000000002a727
+ (id)log;	// IMP=0x001000000002a6cb
- (void).cxx_destruct;	// IMP=0x001000000002aee8
@property(readonly, nonatomic) NSRecursiveLock *stateLock; // @synthesize stateLock=_stateLock;
@property(retain, nonatomic) NSOperationQueue *openApplicationOperationQueue; // @synthesize openApplicationOperationQueue=_openApplicationOperationQueue;
@property(readonly) NSMutableDictionary *pendingResults; // @synthesize pendingResults=_pendingResults;
@property(readonly, nonatomic, getter=isExtension) _Bool extension; // @synthesize extension=_extension;
- (id)popPendingResultForOperationName:(id)arg1;	// IMP=0x001000000002ad87
- (void)enqueueOpenApplicationOperation:(id)arg1 pendingResult:(id)arg2;	// IMP=0x001000000002ab82
- (id)openSensitiveURL:(id)arg1 frontBoardOptions:(id)arg2;	// IMP=0x001000000002aa26
- (id)openSensitiveURL:(id)arg1;	// IMP=0x001000000002aa12
- (id)openURL:(id)arg1 frontBoardOptions:(id)arg2;	// IMP=0x001000000002a8c8
- (id)openURL:(id)arg1;	// IMP=0x001000000002a8b4
- (id)_init;	// IMP=0x001000000002a7a1
- (void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x001000000002a5d1
- (void)openResourceOperationDidComplete:(id)arg1;	// IMP=0x001000000002a4de
- (id)openProductURL:(id)arg1;	// IMP=0x001000000002a4ca
- (void)openApplicationWithBundleIdentifier:(id)arg1 configuration:(id)arg2 pendingResult:(id)arg3;	// IMP=0x001000000002a2f4
- (void)openApplicationWithBundleIdentifier:(id)arg1 usingOpenResourceOperationWithPayloadURL:(id)arg2 options:(id)arg3 pendingResult:(id)arg4;	// IMP=0x001000000002a17f
- (id)openApplicationWithBundleIdentifier:(id)arg1 payloadURL:(id)arg2 universalLinkRequired:(_Bool)arg3;	// IMP=0x0010000000029845
- (id)openApplicationWithBundleIdentifier:(id)arg1 payloadURL:(id)arg2;	// IMP=0x0010000000029830

@end

