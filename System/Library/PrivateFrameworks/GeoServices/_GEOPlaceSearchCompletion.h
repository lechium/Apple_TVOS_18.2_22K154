//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOAutocompleteSessionData, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOPlaceSearchCompletion : NSObject
{
    NSArray *_groups;	// 8 = 0x8
    GEOAutocompleteSessionData *_sessionData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000006c41b8
@property(readonly, nonatomic) GEOAutocompleteSessionData *sessionData; // @synthesize sessionData=_sessionData;
@property(readonly, nonatomic) NSArray *groups; // @synthesize groups=_groups;
- (id)initWithResponse:(id)arg1 traits:(id)arg2 sessionData:(id)arg3 mapItems:(id)arg4;	// IMP=0x00000000006c3adf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

