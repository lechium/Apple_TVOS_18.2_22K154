//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface UIAccessibilityHUDPositionManager : NSObject
{
    NSMapTable *_managedHUDs;	// 8 = 0x8
    struct CGRect _keyboardAvoidanceArea;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x006000000023868c
- (void).cxx_destruct;	// IMP=0x0000000000239462
- (void)stopManagingPositionOfHUD:(id)arg1;	// IMP=0x000000000023944c
- (void)beginManagingPositionOfHUD:(id)arg1 withReferenceView:(id)arg2;	// IMP=0x000000000023942d
- (void)adjustViewPropertiesForHUD:(id)arg1 withReferenceView:(id)arg2;	// IMP=0x0000000000239401
- (void)adjustViewPropertiesForHUD:(id)arg1 withReferenceView:(id)arg2 keyboardFrame:(struct CGRect)arg3;	// IMP=0x0000000000238ce1
- (void)keyboardFrameDidChange:(id)arg1;	// IMP=0x0000000000238bde
- (void)updateFramesForManagedHUDsUsingKeyboardFrame:(struct CGRect)arg1;	// IMP=0x0000000000238a2e
- (void)dealloc;	// IMP=0x00000000002389ac
- (id)init;	// IMP=0x00000000002386e1

@end

