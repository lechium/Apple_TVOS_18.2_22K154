//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CRTTMergeableStringSelection : NSObject
{
    struct vector<std::pair<TopoID, TopoID>, std::allocator<std::pair<TopoID, TopoID>>> _selectionRanges;	// 8 = 0x8
    unsigned long long _selectionAffinity;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x0000000000004f2d
- (void).cxx_destruct;	// IMP=0x0000000000004f11
@property(nonatomic) unsigned long long selectionAffinity; // @synthesize selectionAffinity=_selectionAffinity;
- (id)description;	// IMP=0x0000000000004ca7
- (unsigned long long)hash;	// IMP=0x0000000000004be8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000004a35
- (_Bool)hasTopoIDsThatCanChange;	// IMP=0x0000000000004a2d
- (void)updateTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;	// IMP=0x0000000000004986
- (void *)selectionRanges;	// IMP=0x000000000000497c

@end

