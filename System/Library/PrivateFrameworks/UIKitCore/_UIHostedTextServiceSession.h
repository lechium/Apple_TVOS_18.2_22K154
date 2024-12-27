//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol _UIHostedTextServiceSessionDelegate;

__attribute__((visibility("hidden")))
@interface _UIHostedTextServiceSession
{
    id <_UIHostedTextServiceSessionDelegate> _delegate;	// 8 = 0x8
}

+ (id)showServiceForText:(id)arg1 selectedTextRange:(struct _NSRange)arg2 type:(long long)arg3 fromRect:(struct CGRect)arg4 inView:(id)arg5;	// IMP=0x0060000001577591
+ (id)showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(struct CGRect)arg3 inView:(id)arg4;	// IMP=0x0060000001577562
+ (id)showServiceForType:(long long)arg1 withContext:(id)arg2;	// IMP=0x0060000001577533
@property(nonatomic) id <_UIHostedTextServiceSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)remoteSessionDidDismiss;	// IMP=0x000000000157760f
- (void)dismissTextServiceAnimated:(_Bool)arg1;	// IMP=0x00000000015775c0

@end

