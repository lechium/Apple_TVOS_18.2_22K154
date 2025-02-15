//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TITextCheckerExemptions;

@interface TIRemoteDataHandle : NSObject
{
    TITextCheckerExemptions *_textCheckerExemptions;	// 8 = 0x8
}

+ (id)localizedStringForKey:(id)arg1;	// IMP=0x002000000000bf41
+ (id)localDictionaryPath;	// IMP=0x001000000000bcd2
+ (_Bool)shouldAcceptRequestForMeCardWithAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x001000000000a356
- (void).cxx_destruct;	// IMP=0x002000000000c4a9
- (void)ingestSentence:(id)arg1 language:(id)arg2 phraseRanges:(id)arg3;	// IMP=0x001000000000c475
- (void)alternativesForText:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000c371
- (void)updateKeyboardType:(unsigned long long)arg1 appIdentifier:(id)arg2;	// IMP=0x001000000000c290
- (void)updateForActiveLocaleIdentifiers:(id)arg1;	// IMP=0x001000000000c1c0
- (void)performTrainingForClient:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000c131
- (void)appendWordToTextCheckerLocalDictionary:(id)arg1;	// IMP=0x001000000000bdf6
- (void)requestTextCheckerLocalDictionaryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000bd30
- (void)string:(id)arg1 isExemptFromTextCheckerWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000bbd9
@property(readonly, nonatomic) TITextCheckerExemptions *textCheckerExemptions; // @synthesize textCheckerExemptions=_textCheckerExemptions;
- (void)removeAllDynamicDictionariesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000b90b
- (void)dismissedDataSharingWithResponse:(long long)arg1;	// IMP=0x001000000000b905
- (void)dismissDialogWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000b790
- (id)notificationDetailsForType:(long long)arg1;	// IMP=0x001000000000b1eb
- (void)presentDialogForType:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000add8
- (void)launchPencilSettings;	// IMP=0x001000000000ad3d
- (void)launchDictationSettings;	// IMP=0x001000000000ad2a
- (void)launchKeyboardSettings;	// IMP=0x001000000000ac0f
- (void)requestMeContactWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000a9ca
- (void)requestMeCardWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000a6fc
- (void)updateAssetForInputModeIdentifier:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x001000000000a66d
- (void)fetchAssetUpdateStatusForInputModeIdentifier:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x001000000000a5de
- (void)removeLinguisticAssetsAssertionWithIdentifier:(id)arg1 forClientID:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000a53d
- (void)addLinguisticAssetsAssertionForLanguage:(id)arg1 assertionID:(id)arg2 region:(id)arg3 clientID:(id)arg4 withHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000000a422
- (void)requestLinguisticAssetsForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000a35e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

