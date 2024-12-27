//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSItemProvider, NSString, UITextPasteCoordinator;

__attribute__((visibility("hidden")))
@interface UITextPasteItem : NSObject
{
    _Bool _forcesDefaultAttributes;	// 8 = 0x8
    NSItemProvider *_itemProvider;	// 16 = 0x10
    id _localObject;	// 24 = 0x18
    NSDictionary *_defaultAttributes;	// 32 = 0x20
    UITextPasteCoordinator *_coordinator;	// 40 = 0x28
    NSArray *_supportedPasteConfigurationClasses;	// 48 = 0x30
    NSDictionary *_documentOptions;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000014655f1
@property(copy, nonatomic) NSDictionary *documentOptions; // @synthesize documentOptions=_documentOptions;
@property(nonatomic) _Bool forcesDefaultAttributes; // @synthesize forcesDefaultAttributes=_forcesDefaultAttributes;
@property(retain, nonatomic) NSArray *supportedPasteConfigurationClasses; // @synthesize supportedPasteConfigurationClasses=_supportedPasteConfigurationClasses;
@property(readonly, nonatomic) UITextPasteCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain, nonatomic) NSDictionary *defaultAttributes; // @synthesize defaultAttributes=_defaultAttributes;
@property(retain, nonatomic) id localObject; // @synthesize localObject=_localObject;
@property(retain, nonatomic) NSItemProvider *itemProvider; // @synthesize itemProvider=_itemProvider;
- (id)attributedStringFromAttributedString:(id)arg1 preservingAttributes:(id)arg2 addingAttributes:(id)arg3;	// IMP=0x0000000001465270
- (void)setDefaultResult;	// IMP=0x0000000001464dc8
- (void)setNoResult;	// IMP=0x0000000001464dad
- (void)setAttachmentResult:(id)arg1;	// IMP=0x0000000001464d54
- (void)setAttributedStringResult:(id)arg1;	// IMP=0x0000000001464d3b
- (void)setStringResult:(id)arg1;	// IMP=0x0000000001464c8f
- (id)initWithTextPasteCoordinator:(id)arg1;	// IMP=0x0000000001464c24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

