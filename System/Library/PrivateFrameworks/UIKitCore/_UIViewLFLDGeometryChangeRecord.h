//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSValue, UIView;

__attribute__((visibility("hidden")))
@interface _UIViewLFLDGeometryChangeRecord
{
    NSString *_geometricPropertyName;	// 16 = 0x10
    NSValue *_geometricPropertyValue;	// 24 = 0x18
    UIView *_currentLayoutView;	// 32 = 0x20
    NSString *_currentLayoutMethodName;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000171ea46
@property(readonly, nonatomic) NSString *currentLayoutMethodName; // @synthesize currentLayoutMethodName=_currentLayoutMethodName;
@property(readonly, nonatomic) UIView *currentLayoutView; // @synthesize currentLayoutView=_currentLayoutView;
@property(readonly, nonatomic) NSValue *geometricPropertyValue; // @synthesize geometricPropertyValue=_geometricPropertyValue;
@property(readonly, nonatomic) NSString *geometricPropertyName; // @synthesize geometricPropertyName=_geometricPropertyName;
- (id)description;	// IMP=0x000000000171e6ee
- (id)initWithGeometricPropertyName:(id)arg1 value:(id)arg2 currentLayoutView:(id)arg3 methodName:(id)arg4;	// IMP=0x000000000171e5f1

@end

