//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobBandwidthSettings : PBCodable
{
    int _configuration;	// 8 = 0x8
    int _configurationExtension;	// 12 = 0xc
    unsigned int _maxBandwidth;	// 16 = 0x10
    struct {
        unsigned int configurationExtension:1;
    } _has;	// 20 = 0x14
}

+ (int)bandwidthConfigurationWithArbiterMode:(unsigned char)arg1 connectionType:(int)arg2;	// IMP=0x00100000003faf04
+ (int)bandwidthConfigurationForWiredWithArbiterMode:(unsigned char)arg1;	// IMP=0x00100000003fae96
+ (int)bandwidthConfigurationForUSBWithArbiterMode:(unsigned char)arg1;	// IMP=0x00100000003fae1a
+ (int)bandwidthConfigurationForAWDLWithArbiterMode:(unsigned char)arg1;	// IMP=0x00100000003fad9e
+ (int)bandwidthConfigurationForWiFiWithArbiterMode:(unsigned char)arg1;	// IMP=0x00100000003fad24
+ (int)bandwidthConfigurationFor5GWithArbiterMode:(unsigned char)arg1;	// IMP=0x00100000003facb6
+ (int)bandwidthConfigurationForLTEWithArbiterMode:(unsigned char)arg1;	// IMP=0x00100000003fac3c
+ (int)bandwidthConfigurationFor3GWithArbiterMode:(unsigned char)arg1;	// IMP=0x00100000003fabc2
+ (int)bandwidthConfigurationFor2GWithArbiterMode:(unsigned char)arg1;	// IMP=0x00100000003fab48
@property(nonatomic) unsigned int maxBandwidth; // @synthesize maxBandwidth=_maxBandwidth;
@property(nonatomic) int configuration; // @synthesize configuration=_configuration;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000006b063
- (unsigned long long)hash;	// IMP=0x000000000006b015
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006af97
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006af1b
- (void)copyTo:(id)arg1;	// IMP=0x000000000006aedd
- (void)writeTo:(id)arg1;	// IMP=0x000000000006ae72
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000006ae65
- (id)dictionaryRepresentation;	// IMP=0x000000000006a6a0
- (id)description;	// IMP=0x000000000006a606
- (int)StringAsConfigurationExtension:(id)arg1;	// IMP=0x000000000006a33c
- (id)configurationExtensionAsString:(int)arg1;	// IMP=0x000000000006a11a
@property(nonatomic) _Bool hasConfigurationExtension;
@property(nonatomic) int configurationExtension; // @synthesize configurationExtension=_configurationExtension;
- (int)StringAsConfiguration:(id)arg1;	// IMP=0x0000000000069dec
- (id)configurationAsString:(int)arg1;	// IMP=0x0000000000069bcc
- (id)newBandwidthConfigurations;	// IMP=0x00000000003fb134

@end

