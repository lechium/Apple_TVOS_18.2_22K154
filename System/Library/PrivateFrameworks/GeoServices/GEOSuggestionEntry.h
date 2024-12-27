//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLatLng, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOSuggestionEntry : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    struct GEOHighlight *_textHighlights;	// 24 = 0x18
    unsigned long long _textHighlightsCount;	// 32 = 0x20
    unsigned long long _textHighlightsSpace;	// 40 = 0x28
    NSString *_calloutTitle;	// 48 = 0x30
    NSMutableArray *_displayLines;	// 56 = 0x38
    NSString *_iconID;	// 64 = 0x40
    GEOLatLng *_latlng;	// 72 = 0x48
    NSMutableArray *_namedFeatures;	// 80 = 0x50
    NSString *_searchQueryDisplayString;	// 88 = 0x58
    NSData *_suggestionEntryMetadata;	// 96 = 0x60
    unsigned int _readerMarkPos;	// 104 = 0x68
    unsigned int _readerMarkLength;	// 108 = 0x6c
    struct os_unfair_lock_s _readerLock;	// 112 = 0x70
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_textHighlights:1;
        unsigned int read_calloutTitle:1;
        unsigned int read_displayLines:1;
        unsigned int read_iconID:1;
        unsigned int read_latlng:1;
        unsigned int read_namedFeatures:1;
        unsigned int read_searchQueryDisplayString:1;
        unsigned int read_suggestionEntryMetadata:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 116 = 0x74
}

- (void).cxx_destruct;	// IMP=0x0000000000f937b9
- (unsigned long long)hash;	// IMP=0x0000000000f936ad
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000f934d3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000f92faa
- (void)writeTo:(id)arg1;	// IMP=0x0000000000f92ac5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000f92ab6
- (id)jsonRepresentation;	// IMP=0x0000000000f925f4
- (id)dictionaryRepresentation;	// IMP=0x0000000000f91c2a
- (id)description;	// IMP=0x0000000000f91b7b
- (void)dealloc;	// IMP=0x0000000000f90d25
- (id)initWithData:(id)arg1;	// IMP=0x0000000000f90cc9
- (id)init;	// IMP=0x0000000000f90c6d

@end

