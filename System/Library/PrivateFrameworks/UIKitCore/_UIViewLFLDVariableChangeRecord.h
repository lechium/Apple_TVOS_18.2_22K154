//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSISVariable, UIView;

__attribute__((visibility("hidden")))
@interface _UIViewLFLDVariableChangeRecord
{
    NSISVariable *_variable;	// 16 = 0x10
    double _value;	// 24 = 0x18
    UIView *_variableDelegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000171ec05
@property(readonly, nonatomic) UIView *variableDelegate; // @synthesize variableDelegate=_variableDelegate;
@property(readonly, nonatomic) double value; // @synthesize value=_value;
@property(readonly, nonatomic) NSISVariable *variable; // @synthesize variable=_variable;
- (id)description;	// IMP=0x000000000171eb95
- (id)initWithVariable:(id)arg1 inLayoutEngine:(id)arg2;	// IMP=0x000000000171ea99

@end

