//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreAutoLayout/NSLayoutConstraint.h>

@interface NSLayoutConstraint (NAUIAdditions)
+ (id)naui_constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4 label:(id)arg5;	// IMP=0x0080000000003ea1
+ (id)naui_viewsInConstraints:(id)arg1;	// IMP=0x0080000000003bf2
+ (id)naui_constraintsBySizingView:(id)arg1 toSize:(struct CGSize)arg2;	// IMP=0x0080000000003abb
+ (id)naui_constraintsByAttachingView:(id)arg1 toView:(id)arg2 alongEdges:(unsigned long long)arg3 insets:(struct UIEdgeInsets)arg4;	// IMP=0x0080000000003aa6
+ (id)naui_constraintsByAttachingView:(id)arg1 toView:(id)arg2 alongEdges:(unsigned long long)arg3 relatedBy:(long long)arg4 insets:(struct UIEdgeInsets)arg5;	// IMP=0x008000000000386f
+ (id)naui_constraintsByCenteringView:(id)arg1 withView:(id)arg2 alongAxes:(unsigned long long)arg3 offset:(struct UIOffset)arg4;	// IMP=0x0080000000003721
+ (_Bool)naui_areConstraints:(id)arg1 equalToConstraints:(id)arg2;	// IMP=0x008000000000343b
- (void)naui_setIdentifierWithLabel:(id)arg1;	// IMP=0x00100000000041ad
- (id)naui_debugIdentifierWithBaseLabel:(id)arg1;	// IMP=0x0010000000004069
- (_Bool)naui_isEqualToConstraint:(id)arg1;	// IMP=0x001000000000355d
@end

