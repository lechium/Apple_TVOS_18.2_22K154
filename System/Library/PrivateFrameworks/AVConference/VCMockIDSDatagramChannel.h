//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDS/IDSDatagramChannel.h>

@class NSDictionary, NSLock, NSObject, NSString, VCMockIDSDataChannelLinkContext;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCMockIDSDatagramChannel : IDSDatagramChannel
{
    NSDictionary *_subscribedStreamsByParticipantID;	// 24 = 0x18
    int _socket;	// 32 = 0x20
    _Bool _isValid;	// 36 = 0x24
    VCMockIDSDataChannelLinkContext *_linkContext;	// 40 = 0x28
    CDUnknownBlockType _eventHandler;	// 48 = 0x30
    CDUnknownBlockType _readHandler;	// 56 = 0x38
    CDUnknownBlockType _sharedWriteCompletionHandler;	// 64 = 0x40
    CDUnknownBlockType _readHandlerWithOptions;	// 72 = 0x48
    CDUnknownBlockType _writeDatagramsBlock;	// 80 = 0x50
    CDUnknownBlockType _writeDatagramBlock;	// 88 = 0x58
    CDUnknownBlockType _readyToReadBlock;	// 96 = 0x60
    NSLock *_blockSettingLock;	// 104 = 0x68
    NSLock *_writeDirectPathIDSLock;	// 112 = 0x70
    NSLock *_flushDatagramPacketsLock;	// 120 = 0x78
    struct _VCSingleLinkedList _datagramPackets;	// 128 = 0x80
    struct _VCSingleLinkedList _datagramPacketsDirectIDSPath;	// 160 = 0xa0
    struct __CFAllocator *_datagramPacketAllocator;	// 192 = 0xc0
    unsigned long long _datagramPacketNextSequenceNumber;	// 200 = 0xc8
    _Bool _usingOptions;	// 208 = 0xd0
    double _emulatedRxPLR;	// 216 = 0xd8
    _Bool _doNotDropNackOrRetransmitted;	// 224 = 0xe0
    struct _opaque_pthread_mutex_t _streamSubscriptionLock;	// 232 = 0xe8
    long long _participantGenerationCounter;	// 296 = 0x128
    unsigned short numPacketSent;	// 304 = 0x130
    unsigned short numPacketReceived;	// 306 = 0x132
    int _dataPath;	// 308 = 0x134
    _Bool _isNackEnabled;	// 312 = 0x138
    unsigned char _packetBuffer[2048][1500];	// 313 = 0x139
    unsigned short _packetBufferDataSize[2048];	// 3072314 = 0x2ee13a
    CDStruct_9bf45fcd _packetDatagramOptions[2048];	// 3076416 = 0x2ef140
    _Bool _isServerStatsCached;	// 3322176 = 0x32b140
    CDStruct_9bf45fcd _datagramOptionsCached;	// 3322184 = 0x32b148
    NSObject<OS_dispatch_queue> *_directPathReadQueue;	// 3322304 = 0x32b1c0
    NSObject<OS_dispatch_queue> *_directPathRTXQueue;	// 3322312 = 0x32b1c8
    _Bool _isSourceParticipantIDOnFanOutPacketsEnabled;	// 3322320 = 0x32b1d0
    _Bool _isWrongParticipantIDOnFanOutPacketsEnabled;	// 3322321 = 0x32b1d1
    _Bool _isECNEnabled;	// 3322322 = 0x32b1d2
    _Bool _isShortMKIEnabled;	// 3322323 = 0x32b1d3
    NSString *_destination;	// 3322328 = 0x32b1d8
    _Bool _isTestNetworkRouterEnabled;	// 3322336 = 0x32b1e0
    _Bool _isTwoWayFaceTimeTestUsingSocketsEnabled;	// 3322337 = 0x32b1e1
    struct tagVCRealTimeThread *_packetReceiveThread;	// 3322344 = 0x32b1e8
    _Atomic _Bool _isReceiveThreadTerminating;	// 3322352 = 0x32b1f0
}

+ (void)extractRTPData:(char *)arg1 ssrc:(unsigned int *)arg2 sequenceNumber:(unsigned short *)arg3;	// IMP=0x006000000039faa2
- (void)setParticipantIDOnOptions:(CDStruct_9bf45fcd *)arg1;	// IMP=0x00000000003a3802
- (void)setUPlusOneMode:(_Bool)arg1 isInitiator:(_Bool)arg2;	// IMP=0x00000000003a3703
- (void)flushLinkProbingStatusWithOptions:(id)arg1;	// IMP=0x00000000003a36fd
- (void)queryStatusWithOptions:(id)arg1;	// IMP=0x00000000003a36f7
- (void)stopActiveProbingWithOptions:(id)arg1;	// IMP=0x00000000003a36f1
- (void)queryProbingResultsWithOptions:(id)arg1;	// IMP=0x00000000003a36eb
- (void)startActiveProbingWithOptions:(id)arg1;	// IMP=0x00000000003a36e5
- (void)setWiFiAssist:(_Bool)arg1;	// IMP=0x00000000003a36df
- (void)osChannelInfoLog;	// IMP=0x00000000003a36d9
- (void)handlePacket:(struct _VCMockIDSDatagramChannelPacket *)arg1 packetHandler:(CDUnknownBlockType)arg2 shouldDropThisPacket:(_Bool)arg3;	// IMP=0x00000000003a3647
- (void)retrieveAndProcessMediaPacketsFromBuffer:(struct tagRTCPPACKET *)arg1 packetHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003a35a9
- (void)retrieveAndProcesOnePacket:(unsigned int)arg1 seq:(unsigned short)arg2 count:(int)arg3 index:(int)arg4;	// IMP=0x00000000003a2bde
- (void)addMediaPacketToBuffer:(char *)arg1 length:(unsigned long long)arg2 datagramOptions:(CDStruct_9bf45fcd)arg3;	// IMP=0x00000000003a2972
- (void)processPacket:(struct _VCMockIDSDatagramChannelPacket *)arg1 packetHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003a270d
- (void)printDroppedPacketInfo:(struct _VCMockIDSDatagramChannelPacket *)arg1;	// IMP=0x00000000003a2332
- (struct _VCMockIDSDatagramChannelPacket *)constructPacket:(struct _VCMockIDSDatagramChannelPacket *)arg1 datagram:(const void *)arg2 datagramSize:(unsigned int)arg3 datagramOptions:(CDStruct_9bf45fcd *)arg4;	// IMP=0x00000000003a225e
- (int)readyToRead;	// IMP=0x00000000003a2193
- (int)drainUnderlyingFileDescriptor;	// IMP=0x00000000003a20e7
- (int)underlyingFileDescriptor;	// IMP=0x00000000003a1ffa
- (_Bool)createSocketWithSourcePort:(short)arg1;	// IMP=0x00000000003a1f58
- (void)reportFirstPacketTimeForMKI:(id)arg1;	// IMP=0x00000000003a1e9d
- (void)requestSessionInfoWithOptions:(id)arg1;	// IMP=0x00000000003a19a6
- (void)setChannelPreferences:(id)arg1;	// IMP=0x00000000003a1871
- (id)shortMKIPrefixLength;	// IMP=0x00000000003a184e
- (void)setReadHandlerWithOptions:(CDUnknownBlockType)arg1;	// IMP=0x00000000003a1802
- (void)setReadHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003a17b6
- (void)setWriteCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003a176a
- (void)setEventHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003a162b
- (id)encryptionInfoEventWithIsLocalKey:(_Bool)arg1;	// IMP=0x00000000003a145d
- (void)start;	// IMP=0x00000000003a1434
- (void)invalidate;	// IMP=0x00000000003a1045
- (_Bool)processDirectIDSPathWithDatagram:(const void *)arg1 datagramSize:(unsigned int)arg2 datagramOptions:(CDStruct_9bf45fcd *)arg3 error:(id *)arg4;	// IMP=0x00000000003a0bc8
- (void)writeDatagrams:(const void **)arg1 datagramsSize:(unsigned int *)arg2 datagramsInfo:(CDStruct_cae94949 *)arg3 datagramsCount:(int)arg4 options:(struct **)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000003a0a86
- (void)writeDatagram:(const void *)arg1 datagramSize:(unsigned int)arg2 datagramInfo:(CDStruct_cae94949)arg3 options:(CDStruct_9bf45fcd *)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000003a0959
- (void)readDatagramsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003a089e
- (void)writeDatagram:(const void *)arg1 datagramSize:(unsigned int)arg2 flags:(CDStruct_cae94949)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000003a07bf
- (void)processWriteCompletionCallback:(CDUnknownBlockType)arg1 forDatagramWithSize:(unsigned long long)arg2 error:(id)arg3;	// IMP=0x00000000003a0743
- (void)readDatagramWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003a0688
- (_Bool)isNACKPacket:(char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000003a04e8
- (_Bool)isRTCPPacket:(char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000003a04cd
- (_Bool)isMediaPacket:(char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000003a04b2
- (_Bool)isVideoPacket:(char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000003a0456
- (void)dequeueDatagramPacket:(CDUnknownBlockType)arg1;	// IMP=0x00000000003a03a2
- (_Bool)shouldReadPacket:(struct _VCMockIDSDatagramChannelPacket *)arg1;	// IMP=0x000000000039fe72
- (id)newArrayOfStreamIdsForPacket:(struct _VCMockIDSDatagramChannelPacket *)arg1;	// IMP=0x000000000039fdb6
- (_Bool)isControlChannelDatagram:(struct _VCMockIDSDatagramChannelPacket *)arg1;	// IMP=0x000000000039fda6
- (_Bool)enqueueDatagramPacket:(const void *)arg1 datagramSize:(unsigned int)arg2 options:(CDStruct_9bf45fcd *)arg3 error:(id *)arg4;	// IMP=0x000000000039facf
- (void)signalUnderlyingFileDescriptor;	// IMP=0x000000000039f9f8
- (void)setReadyToReadBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000039f979
- (void)setWriteDatagramBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000039f8fa
- (void)setWriteDatagramsBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000039f87b
- (void)readDatagram:(const void *)arg1 datagramSize:(unsigned int)arg2 datagramOptions:(CDStruct_9bf45fcd *)arg3;	// IMP=0x000000000039f797
@property(readonly) _Bool idsUPlusOneMode;
- (void)dealloc;	// IMP=0x000000000039f66e
- (void)cleanup;	// IMP=0x000000000039f4d8
- (void)flushDatagramPacketsListDIrectIDSPath;	// IMP=0x000000000039f489
- (void)flushDatagramPacketsList;	// IMP=0x000000000039f3e8
- (id)initCreateSocketRequiresOptions:(_Bool)arg1 dataPath:(int)arg2 destination:(id)arg3;	// IMP=0x000000000039f01c
- (id)initRequiresOptions:(_Bool)arg1;	// IMP=0x000000000039eea1
- (_Bool)setupMockIDSDatagramChannelRequiresOptions:(_Bool)arg1 sourcePort:(short)arg2;	// IMP=0x000000000039e9d3

@end

