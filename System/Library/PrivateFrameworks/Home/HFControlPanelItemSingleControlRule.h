//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HFControlPanelItemSingleControlRule : NSObject
{
    CDUnknownBlockType _filter;	// 8 = 0x8
    CDUnknownBlockType _displayResultsGenerator;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002a0942
@property(readonly, copy, nonatomic) CDUnknownBlockType displayResultsGenerator; // @synthesize displayResultsGenerator=_displayResultsGenerator;
@property(readonly, copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
- (id)controlPanelItemForControlItems:(id)arg1;	// IMP=0x00000000002a07fc
- (id)initWithFilter:(CDUnknownBlockType)arg1 displayResultsGenerator:(CDUnknownBlockType)arg2;	// IMP=0x00000000002a0743

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

