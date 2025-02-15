//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class MISSING_TYPE, NSString, PLSInternationalizationSettings, TSKPreviewViewController, TSKSettingGroup, UIBarButtonItem, UIGestureRecognizer;

@interface TVSettingsPreferredLanguagesViewController : TSKViewController
{
    TSKPreviewViewController *_languagePreviewViewController;	// 8 = 0x8
    TSKSettingGroup *_preferredLanguagesGroup;	// 16 = 0x10
    TSKSettingGroup *_addGroup;	// 24 = 0x18
    UIBarButtonItem *_editButton;	// 32 = 0x20
    UIBarButtonItem *_doneButton;	// 40 = 0x28
    UIBarButtonItem *_cancelButton;	// 48 = 0x30
    UIGestureRecognizer *_backGestureRecognizer;	// 56 = 0x38
    PLSInternationalizationSettings *_intlSettings;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000004b7f3
@property(retain, nonatomic) PLSInternationalizationSettings *intlSettings; // @synthesize intlSettings=_intlSettings;
@property(retain, nonatomic) UIGestureRecognizer *backGestureRecognizer; // @synthesize backGestureRecognizer=_backGestureRecognizer;
@property(retain, nonatomic) UIBarButtonItem *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIBarButtonItem *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) TSKSettingGroup *addGroup; // @synthesize addGroup=_addGroup;
@property(retain, nonatomic) TSKSettingGroup *preferredLanguagesGroup; // @synthesize preferredLanguagesGroup=_preferredLanguagesGroup;
@property(readonly, nonatomic) TSKPreviewViewController *languagePreviewViewController; // @synthesize languagePreviewViewController=_languagePreviewViewController;
- (long long)preferredLanguagesGroupCount;	// IMP=0x001000000004b6a4
- (id)displayNameForKeyboardInputModeVariantWithLanguageIdentifier:(id)arg1;	// IMP=0x001000000004b3de
- (id)systemLanguageIdentifier;	// IMP=0x001000000004b326
- (id)languageIdentifierWithoutCurrentRegion:(id)arg1;	// IMP=0x001000000004b20d
- (id)languageListFilter;	// IMP=0x001000000004afe3
- (MISSING_TYPE *)localizedLanguageDisplayName:removeCurrentRegion: /* Error: Ran out of types for this method. */;	// IMP=0x001000000004af23
- (id)localizedLanguageDisplayName:(id)arg1;	// IMP=0x001000000004af0f
- (id)localizedLanguageFormatter;	// IMP=0x001000000004abd2
- (id)languageFormatter;	// IMP=0x001000000004a9ac
- (void)confirmSiriActivationIfNeededWithNewLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004a115
- (void)commitLanguageChanges:(_Bool)arg1;	// IMP=0x0010000000049cc9
- (void)prepareLanguageChangeAfterSiriActivation;	// IMP=0x001000000004968a
- (void)addPreferredLanguageWithIdentifier:(id)arg1 presenter:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000048bb8
- (void)cancelEditing:(id)arg1;	// IMP=0x0010000000048b2e
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0010000000048a96
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x001000000004885d
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x001000000004866e
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;	// IMP=0x0010000000048504
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;	// IMP=0x001000000004848d
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x00100000000483d9
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0010000000048254
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x00100000000481bb
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000047fd8
- (void)updateViewsAnimated:(_Bool)arg1;	// IMP=0x0010000000047e05
- (void)updateViews;	// IMP=0x0010000000047dee
- (void)handleEditingButton:(id)arg1;	// IMP=0x0010000000047803
- (void)dealloc;	// IMP=0x00100000000474a6
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000047453
- (id)loadSettingGroups;	// IMP=0x0010000000046ad8
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000046a86
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000000469d2
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000046989
- (void)viewDidLoad;	// IMP=0x00100000000466a4
- (id)preferredLanguagesManager;	// IMP=0x001000000004668b
- (id)init;	// IMP=0x001000000004662e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

