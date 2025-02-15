//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SiriUIComponentConstraintFactory : NSObject
{
    NSMutableDictionary *_layoutStyleToComponentLayoutMaps;	// 8 = 0x8
}

+ (id)sharedConstraintFactory;	// IMP=0x00600000000250a6
- (void).cxx_destruct;	// IMP=0x00000000000268dc
- (void)_addConstants:(id)arg1 forLowerComponentStyle:(unsigned long long)arg2 toMap:(id)arg3;	// IMP=0x000000000002684a
- (id)_createMapForLayoutStyle:(long long)arg1;	// IMP=0x0000000000026716
- (long long)_layoutAttributeForView:(id)arg1 componentType:(unsigned long long)arg2 isLower:(_Bool)arg3;	// IMP=0x000000000002662b
- (unsigned long long)_componentTypeForView:(id)arg1 component:(id)arg2;	// IMP=0x000000000002656c
- (id)_bestDistanceFromComponentType:(unsigned long long)arg1 toComponentType:(unsigned long long)arg2 layoutStyle:(long long)arg3;	// IMP=0x00000000000262d7
- (id)bottomConstraintForView:(id)arg1 fromLayoutGuide:(id)arg2 templateComponent:(id)arg3 layoutStyle:(long long)arg4;	// IMP=0x00000000000261b2
- (id)topConstraintForView:(id)arg1 fromLayoutGuide:(id)arg2 templateComponent:(id)arg3 layoutStyle:(long long)arg4;	// IMP=0x000000000002608b
- (id)bottomConstraintForView:(id)arg1 inSuperview:(id)arg2 templateComponent:(id)arg3 layoutStyle:(long long)arg4;	// IMP=0x0000000000025f66
- (id)topConstraintForView:(id)arg1 inSuperview:(id)arg2 templateComponent:(id)arg3 layoutStyle:(long long)arg4;	// IMP=0x0000000000025e3f
- (id)verticalConstraintFromUpperView:(id)arg1 lowerView:(id)arg2 upperTemplateComponent:(id)arg3 lowerTemplateComponent:(id)arg4 layoutStyle:(long long)arg5;	// IMP=0x0000000000025b80
- (void)_setupMaps;	// IMP=0x000000000002517a
- (id)init;	// IMP=0x0000000000025133

@end

