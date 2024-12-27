//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreLocation/CLPlacemark.h>

@class NSString;

@interface CLPlacemark (INIntentsAdditionsDeprecated)
+ (id)placemarkWithLocation:(id)arg1 name:(id)arg2 postalAddress:(id)arg3;	// IMP=0x00100000002a115f
+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x00100000003a2824
- (id)initIntentPlacemarkWithLocation:(id)arg1 addressDictionary:(id)arg2;	// IMP=0x0010000000010d2d
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;	// IMP=0x001000000008b33b
- (id)_intents_defaultReadableDescription;	// IMP=0x001000000008b259
- (_Bool)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2;	// IMP=0x001000000013f685
- (id)_intents_indexingRepresentation;	// IMP=0x00100000002b2075
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x00100000003a2685

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

