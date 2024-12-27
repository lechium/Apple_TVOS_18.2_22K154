//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSSearchableIndex, NSString;

__attribute__((visibility("hidden")))
@interface CADCoreSpotlightIndex : NSObject
{
    CSSearchableIndex *_index;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000049286
- (void)deleteAllSearchableItemsForBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000049125
- (void)indexSearchableItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000048ee8
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000048d87
- (id)initWithBundleID:(id)arg1;	// IMP=0x0000000000048cf4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

