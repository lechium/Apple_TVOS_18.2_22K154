//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSBagURLParser : NSObject
{
}

+ (struct _NSRange)_rangeOfTemplateInURLString:(id)arg1;	// IMP=0x0080000000306655
+ (struct _NSRange)_rangeofSubstringWithOpeningTag:(id)arg1 closingTag:(id)arg2 inString:(id)arg3;	// IMP=0x0080000000306571
+ (id)_firstVariableInTemplate:(id)arg1 includeTags:(_Bool)arg2;	// IMP=0x00800000003064ae
+ (id)URLBySubstitutingVariablesInURLString:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0080000000305f16
+ (id)_URLBySubstitutingVariablesInURLString:(id)arg1 range:(struct _NSRange)arg2 usingPromiseBlock:(CDUnknownBlockType)arg3;	// IMP=0x008000000030581e
+ (id)URLBySubstitutingVariablesInURLString:(id)arg1 usingPromiseBlock:(CDUnknownBlockType)arg2;	// IMP=0x008000000030578a

@end

