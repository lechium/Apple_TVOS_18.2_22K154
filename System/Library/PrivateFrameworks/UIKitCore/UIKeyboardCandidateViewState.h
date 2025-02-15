//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIKeyboardCandidateViewStyle;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateViewState : NSObject
{
    _Bool _hasBackdrop;	// 8 = 0x8
    _Bool _candidateNumberEnabled;	// 9 = 0x9
    UIKeyboardCandidateViewStyle *_style;	// 16 = 0x10
    UIKeyboardCandidateViewStyle *_disambiguationStyle;	// 24 = 0x18
    long long _primaryGridRowType;	// 32 = 0x20
    long long _disambiguationGridRowType;	// 40 = 0x28
    long long _disambiguationGridPosition;	// 48 = 0x30
    long long _sortControlPosition;	// 56 = 0x38
    long long _inlineTextViewPosition;	// 64 = 0x40
    long long _arrowButtonPosition;	// 72 = 0x48
    long long _arrowButtonDirection;	// 80 = 0x50
    double _yOffset;	// 88 = 0x58
    double _additionalHeight;	// 96 = 0x60
    unsigned long long _borders;	// 104 = 0x68
    struct CGPoint _arrowButtonOffset;	// 112 = 0x70
}

+ (_Bool)resolveInstanceMethod:(SEL)arg1;	// IMP=0x0010000000bd5690
- (void).cxx_destruct;	// IMP=0x0000000000bd58b4
@property(nonatomic) unsigned long long borders; // @synthesize borders=_borders;
@property(nonatomic) struct CGPoint arrowButtonOffset; // @synthesize arrowButtonOffset=_arrowButtonOffset;
@property(nonatomic) double additionalHeight; // @synthesize additionalHeight=_additionalHeight;
@property(nonatomic) double yOffset; // @synthesize yOffset=_yOffset;
@property(nonatomic) _Bool candidateNumberEnabled; // @synthesize candidateNumberEnabled=_candidateNumberEnabled;
@property(nonatomic) _Bool hasBackdrop; // @synthesize hasBackdrop=_hasBackdrop;
@property(nonatomic) long long arrowButtonDirection; // @synthesize arrowButtonDirection=_arrowButtonDirection;
@property(nonatomic) long long arrowButtonPosition; // @synthesize arrowButtonPosition=_arrowButtonPosition;
@property(nonatomic) long long inlineTextViewPosition; // @synthesize inlineTextViewPosition=_inlineTextViewPosition;
@property(nonatomic) long long sortControlPosition; // @synthesize sortControlPosition=_sortControlPosition;
@property(nonatomic) long long disambiguationGridPosition; // @synthesize disambiguationGridPosition=_disambiguationGridPosition;
@property(nonatomic) long long disambiguationGridRowType; // @synthesize disambiguationGridRowType=_disambiguationGridRowType;
@property(nonatomic) long long primaryGridRowType; // @synthesize primaryGridRowType=_primaryGridRowType;
@property(retain, nonatomic) UIKeyboardCandidateViewStyle *disambiguationStyle; // @synthesize disambiguationStyle=_disambiguationStyle;
@property(retain, nonatomic) UIKeyboardCandidateViewStyle *style; // @synthesize style=_style;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bd54e3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bd5404

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

