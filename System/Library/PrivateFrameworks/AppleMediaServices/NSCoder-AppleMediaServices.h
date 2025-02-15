//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCoder.h>

@interface NSCoder (AppleMediaServices)
- (void)ams_encodePropertyListDictionary:(id)arg1 format:(unsigned long long)arg2 forKey:(id)arg3;	// IMP=0x0070000000531820
- (void)ams_encodePropertyListArray:(id)arg1 format:(unsigned long long)arg2 forKey:(id)arg3;	// IMP=0x0070000000531659
- (void)ams_encodeJSONDictionary:(id)arg1 forKey:(id)arg2;	// IMP=0x0070000000531496
- (void)ams_encodeJSONArray:(id)arg1 forKey:(id)arg2;	// IMP=0x00700000005312d3
- (void)ams_encodeBase64EncodedData:(id)arg1 forKey:(id)arg2;	// IMP=0x0070000000531259
- (id)ams_decodePropertyListDictionaryForKey:(id)arg1;	// IMP=0x007000000053103f
- (id)ams_decodePropertyListArrayForKey:(id)arg1;	// IMP=0x0070000000530e25
- (id)ams_decodeJSONDictionaryForKey:(id)arg1;	// IMP=0x0070000000530c0b
- (id)ams_decodeJSONArrayForKey:(id)arg1;	// IMP=0x00700000005309f1
- (id)ams_decodeBase64EncodedDataForKey:(id)arg1;	// IMP=0x0070000000530942
- (_Bool)_ams_encodePropertyListObject:(id)arg1 forKey:(id)arg2 format:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x00700000005308aa
- (_Bool)_ams_encodeJSONObject:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x007000000053065d
- (id)_ams_decodeJSONObjectForKey:(id)arg1 error:(id *)arg2;	// IMP=0x00700000005305be
- (id)_ams_decodePropertyListObjectForKey:(id)arg1 error:(id *)arg2;	// IMP=0x007000000053051c
@end

