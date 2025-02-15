//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SRModeDialogTransformer : NSObject
{
}

+ (id)_instrumentation;	// IMP=0x004000000005b1d5
+ (id)_analytics;	// IMP=0x001000000005b1bc
+ (void)_logModeComputationForAceCommand:(id)arg1 mode:(unsigned long long)arg2;	// IMP=0x001000000005b04f
+ (id)_addViewsForAddDialogs:(id)arg1 views:(id)arg2;	// IMP=0x001000000005adab
+ (id)_sayItForDialog:(id)arg1;	// IMP=0x001000000005aa13
+ (id)_speakableTextForDialog:(id)arg1 mode:(unsigned long long)arg2;	// IMP=0x001000000005a52f
+ (id)_utteranceViewForDialog:(id)arg1 mode:(unsigned long long)arg2 printedOnly:(_Bool)arg3;	// IMP=0x0010000000059d3c
+ (id)_transformDialogAddViews:(id)arg1 forMode:(unsigned long long)arg2;	// IMP=0x00100000000595e1
+ (id)_removeUtteranceViewsFromAddViews:(id)arg1 forMode:(unsigned long long)arg2;	// IMP=0x0010000000058fd8
+ (id)_removeSpeakableTextFromAddViews:(id)arg1 forMode:(unsigned long long)arg2;	// IMP=0x0010000000058525
+ (id)_removeRedundantUtteranceViewsFromAddViews:(id)arg1 forMode:(unsigned long long)arg2;	// IMP=0x00100000000580d7
+ (id)_firstSnippetInViews:(id)arg1;	// IMP=0x0010000000057f87
+ (_Bool)_alwaysPrintSiriResponse;	// IMP=0x0010000000057f3c
+ (id)_redundantDUCIds;	// IMP=0x0010000000057cc2
+ (id)_configurationDictionary;	// IMP=0x0010000000057b63
+ (id)_transformLegacyAddViews:(id)arg1 forMode:(unsigned long long)arg2;	// IMP=0x001000000005798c
+ (_Bool)_shouldTransformLegacyAddViews;	// IMP=0x0010000000057984
+ (unsigned long long)_typeOfAddViews:(id)arg1;	// IMP=0x00100000000577ad
+ (_Bool)supportsTransformationForAceCommand:(id)arg1;	// IMP=0x001000000005774d
+ (id)transformAddDialogs:(id)arg1 forMode:(unsigned long long)arg2;	// IMP=0x00100000000571a7
+ (id)transformAddViews:(id)arg1 forMode:(unsigned long long)arg2;	// IMP=0x0010000000056f3c

@end

