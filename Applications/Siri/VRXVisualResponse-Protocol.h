//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSDictionary, NSString;
@protocol VRXInteractionDelegate;

@protocol VRXVisualResponse <NSObject>
@property(nonatomic) long long visualResponseLocation;
@property(nonatomic) _Bool isRedacted;
@property(readonly, nonatomic) _Bool requestsKeyWindow;
@property(readonly, nonatomic) _Bool containsComponentsWithAction;
@property(readonly, nonatomic) NSArray *aceCommands;
@property(nonatomic) long long backgroundMaterial;
@property(nonatomic) __weak id <VRXInteractionDelegate> interactionDelegate;
@property(nonatomic) _Bool isPresentedWithSmartDialogText;
@property(nonatomic) double snippetWidth;
@property(nonatomic) long long currentIdiom;
@property(retain, nonatomic) NSString *responseViewId;
@property(retain, nonatomic) NSString *viewId;
- (void)setInitialFocusIndex:(long long)arg1;
- (void)setIsInAmbient:(_Bool)arg1 withScaleFactor:(double)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)postSiriEvent:(long long)arg1;
- (void)setPlayerState:(long long)arg1 aceId:(NSString *)arg2;
- (void)setAsrText:(NSString *)arg1;
- (void)updateSharedStateData:(NSData *)arg1;
- (void)updateSharedState:(NSDictionary *)arg1;
@end

