//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class INImage, NSString;

@interface NSArray (INKeyImageProducing)
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;	// IMP=0x002000000005633b
@property(readonly) INImage *_keyImage;
- (id)_intents_localizedCopyWithLocalizer:(id)arg1;	// IMP=0x002000000008985d
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;	// IMP=0x0020000000089294
- (void)_intents_updateContainerWithCache:(id)arg1;	// IMP=0x00200000000bbb66
- (id)_intents_cacheableObjects;	// IMP=0x00200000000bb918
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x00200000001316a0
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00200000002132c0
- (_Bool)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2;	// IMP=0x0020000000293e1b
- (id)_intents_indexingRepresentation;	// IMP=0x00200000002b1dfc
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x00200000002b1c93
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00200000002f34ee
- (id)_JSONDictionaryRepresentationForIntent:(id)arg1 parameterName:(id)arg2;	// IMP=0x00200000002f32a4
- (id)resolutionResultDataForIntent:(id)arg1 intentSlotDescription:(id)arg2 error:(id *)arg3;	// IMP=0x00200000002f2dc5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

