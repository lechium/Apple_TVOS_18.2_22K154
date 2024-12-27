//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _SFPBCommandReference, _SFPBRFTextProperty, _SFPBRFVisualProperty;

@protocol _SFPBRFAttribution <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(retain, nonatomic) _SFPBCommandReference *commandReference;
@property(copy, nonatomic) NSString *locale;
@property(copy, nonatomic) NSString *localized_separator;
@property(copy, nonatomic) NSString *localized_index;
@property(nonatomic) int index;
@property(retain, nonatomic) _SFPBRFVisualProperty *image;
@property(retain, nonatomic) _SFPBRFTextProperty *subtitle;
@property(retain, nonatomic) _SFPBRFTextProperty *title;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

