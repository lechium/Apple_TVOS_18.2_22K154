//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDSearchACHintMetadata, GEOPDSearchQueryCompletionMetadata, GEOPDSearchQueryCtrMetadata, GEOPDSearchQueryDirectionsIntentMetadata, GEOPDSearchQueryDymMetadata, GEOPDSearchQueryFuzzyMatchV2Metadata, GEOPDSearchQueryGeoMetadata, GEOPDSearchQueryGeoNormalizerMetadata, GEOPDSearchQueryGeoTagMetadata, GEOPDSearchQueryInterpretationMetadata, GEOPDSearchQueryNeuralRewriteMetadata, GEOPDSearchQueryNormalizerMetadata, GEOPDSearchQueryPoiMetadata, GEOPDSearchQuerySpellCorrectionMetadata, GEOPDSearchQuerySynonymMetadata, GEOPDSearchQueryTagMetadata, GEOPDSearchQueryTokenImportanceMetadata, GEOPDSearchQueryTokenizerMetadata, GEOPDSearchQueryTransliteratorMetadata, GEOPDSearchRichBrandMetadata, GEOPDSearchTokenSynonymMetadata, NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchQueryIntentMetadata : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_95bda58d _intentSources;	// 16 = 0x10
    CDStruct_95bda58d _rewrittenQueryTypes;	// 40 = 0x28
    GEOPDSearchACHintMetadata *_acHintMetadata;	// 64 = 0x40
    GEOPDSearchQueryTokenImportanceMetadata *_geoTokenImportanceMetadata;	// 72 = 0x48
    NSString *_originalQuery;	// 80 = 0x50
    NSMutableArray *_queryClassificationMetadatas;	// 88 = 0x58
    GEOPDSearchQueryCompletionMetadata *_queryCompletionMetadata;	// 96 = 0x60
    GEOPDSearchQueryCtrMetadata *_queryCtrMetadata;	// 104 = 0x68
    GEOPDSearchQueryDirectionsIntentMetadata *_queryDirectionsIntentMetadata;	// 112 = 0x70
    GEOPDSearchQueryDymMetadata *_queryDymMetadata;	// 120 = 0x78
    NSMutableArray *_queryEmbeddingMetadatas;	// 128 = 0x80
    GEOPDSearchQueryFuzzyMatchV2Metadata *_queryFuzzyMatchV2Metadata;	// 136 = 0x88
    GEOPDSearchQueryGeoMetadata *_queryGeoMetadata;	// 144 = 0x90
    GEOPDSearchQueryGeoNormalizerMetadata *_queryGeoNormalizerMetadata;	// 152 = 0x98
    GEOPDSearchQueryGeoTagMetadata *_queryGeoTagMetadata;	// 160 = 0xa0
    double _queryIntentWeight;	// 168 = 0xa8
    GEOPDSearchQueryInterpretationMetadata *_queryInterpretationMetadata;	// 176 = 0xb0
    GEOPDSearchQueryNeuralRewriteMetadata *_queryNeuralRewriteMetadata;	// 184 = 0xb8
    GEOPDSearchQueryNormalizerMetadata *_queryNormalizerMetadata;	// 192 = 0xc0
    GEOPDSearchQueryPoiMetadata *_queryPoiMetadata;	// 200 = 0xc8
    GEOPDSearchQuerySpellCorrectionMetadata *_querySpellCorrectionMetadata;	// 208 = 0xd0
    GEOPDSearchQuerySynonymMetadata *_querySynonymMetadata;	// 216 = 0xd8
    GEOPDSearchQueryTagMetadata *_queryTagMetadata;	// 224 = 0xe0
    GEOPDSearchQueryTokenImportanceMetadata *_queryTokenImportanceMetadata;	// 232 = 0xe8
    GEOPDSearchQueryTokenizerMetadata *_queryTokenizerMetadata;	// 240 = 0xf0
    GEOPDSearchQueryTransliteratorMetadata *_queryTransliterMetadata;	// 248 = 0xf8
    GEOPDSearchQueryTokenizerMetadata *_rawQueryTokenizerMetadata;	// 256 = 0x100
    NSString *_rewrittenQuery;	// 264 = 0x108
    GEOPDSearchRichBrandMetadata *_richBrandMetadata;	// 272 = 0x110
    GEOPDSearchTokenSynonymMetadata *_tokenSynonymMetadata;	// 280 = 0x118
    unsigned int _readerMarkPos;	// 288 = 0x120
    unsigned int _readerMarkLength;	// 292 = 0x124
    struct os_unfair_lock_s _readerLock;	// 296 = 0x128
    int _rewrittenQueryIndex;	// 300 = 0x12c
    _Bool _isFromDefinitiveQu;	// 304 = 0x130
    _Bool _isFromKnowledgeGraph;	// 305 = 0x131
    _Bool _isFromSearchQu;	// 306 = 0x132
    struct {
        unsigned int has_queryIntentWeight:1;
        unsigned int has_rewrittenQueryIndex:1;
        unsigned int has_isFromDefinitiveQu:1;
        unsigned int has_isFromKnowledgeGraph:1;
        unsigned int has_isFromSearchQu:1;
        unsigned int read_intentSources:1;
        unsigned int read_rewrittenQueryTypes:1;
        unsigned int read_acHintMetadata:1;
        unsigned int read_geoTokenImportanceMetadata:1;
        unsigned int read_originalQuery:1;
        unsigned int read_queryClassificationMetadatas:1;
        unsigned int read_queryCompletionMetadata:1;
        unsigned int read_queryCtrMetadata:1;
        unsigned int read_queryDirectionsIntentMetadata:1;
        unsigned int read_queryDymMetadata:1;
        unsigned int read_queryEmbeddingMetadatas:1;
        unsigned int read_queryFuzzyMatchV2Metadata:1;
        unsigned int read_queryGeoMetadata:1;
        unsigned int read_queryGeoNormalizerMetadata:1;
        unsigned int read_queryGeoTagMetadata:1;
        unsigned int read_queryInterpretationMetadata:1;
        unsigned int read_queryNeuralRewriteMetadata:1;
        unsigned int read_queryNormalizerMetadata:1;
        unsigned int read_queryPoiMetadata:1;
        unsigned int read_querySpellCorrectionMetadata:1;
        unsigned int read_querySynonymMetadata:1;
        unsigned int read_queryTagMetadata:1;
        unsigned int read_queryTokenImportanceMetadata:1;
        unsigned int read_queryTokenizerMetadata:1;
        unsigned int read_queryTransliterMetadata:1;
        unsigned int read_rawQueryTokenizerMetadata:1;
        unsigned int read_rewrittenQuery:1;
        unsigned int read_richBrandMetadata:1;
        unsigned int read_tokenSynonymMetadata:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 308 = 0x134
}

- (void).cxx_destruct;	// IMP=0x0000000000a55552
- (unsigned long long)hash;	// IMP=0x0000000000a55075
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a54a07
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a53fd5
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a53240
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a53231
- (id)jsonRepresentation;	// IMP=0x0000000000a4563a
- (id)dictionaryRepresentation;	// IMP=0x0000000000a431b9
- (id)description;	// IMP=0x0000000000a4310a
- (void)dealloc;	// IMP=0x0000000000a40aff
- (id)initWithData:(id)arg1;	// IMP=0x0000000000a40aa3
- (id)init;	// IMP=0x0000000000a40a47

@end

