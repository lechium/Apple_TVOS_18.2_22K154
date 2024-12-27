//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPModelObject, NSString;

__attribute__((visibility("hidden")))
@interface _MPCPlayerFeedbackCommand
{
    _Bool _value;	// 16 = 0x10
    _Bool _isDislikingFavoritableModelObject;	// 17 = 0x11
    unsigned int _command;	// 20 = 0x14
    NSString *_localizedTitle;	// 24 = 0x18
    NSString *_localizedShortTitle;	// 32 = 0x20
    long long _presentationStyle;	// 40 = 0x28
    MPModelObject *_favoritableModelObject;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000298487
@property(copy, nonatomic) MPModelObject *favoritableModelObject; // @synthesize favoritableModelObject=_favoritableModelObject;
@property(nonatomic) _Bool isDislikingFavoritableModelObject; // @synthesize isDislikingFavoritableModelObject=_isDislikingFavoritableModelObject;
@property(nonatomic) _Bool value; // @synthesize value=_value;
@property(nonatomic) long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(copy, nonatomic) NSString *localizedShortTitle; // @synthesize localizedShortTitle=_localizedShortTitle;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly, nonatomic) unsigned int command; // @synthesize command=_command;
- (id)changeValue:(_Bool)arg1;	// IMP=0x00000000002980e4
- (id)initWithResponse:(id)arg1 mediaRemoteCommand:(unsigned int)arg2;	// IMP=0x00000000002980a2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

