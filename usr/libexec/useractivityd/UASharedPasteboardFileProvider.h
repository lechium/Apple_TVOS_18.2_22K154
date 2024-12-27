//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue, NSString, NSURL;

@interface UASharedPasteboardFileProvider : NSObject
{
    _Bool _locked;	// 8 = 0x8
    NSOperationQueue *_providedItemsOperationQueue;	// 16 = 0x10
    NSURL *_providedItemsURL;	// 24 = 0x18
    NSMutableDictionary *_providerRequests;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000004333
@property _Bool locked; // @synthesize locked=_locked;
@property(retain) NSMutableDictionary *providerRequests; // @synthesize providerRequests=_providerRequests;
@property(readonly, copy) NSURL *_providedItemsURL; // @synthesize _providedItemsURL;
@property(readonly) NSOperationQueue *_providedItemsOperationQueue; // @synthesize _providedItemsOperationQueue;
- (void)_provideItemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000041e8
- (void)_provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000004043
- (void)unlockWithError:(id)arg1;	// IMP=0x0010000000003dcb
- (id)initWithURL:(id)arg1;	// IMP=0x0010000000003cfc

// Remaining properties
@property(readonly, copy) NSString *_fileReactorID;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

