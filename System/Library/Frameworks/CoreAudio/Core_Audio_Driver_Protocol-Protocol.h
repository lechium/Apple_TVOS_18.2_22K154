//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class Core_Audio_XPC_Raw_Transporter, NSData, NSDictionary, NSString, NSXPCListenerEndpoint;

@protocol Core_Audio_Driver_Protocol
- (void)set_property_data:(struct Driver_Property_Identity)arg1 qualifier:(NSData *)arg2 data:(NSData *)arg3 reply:(void (^)(int))arg4;
- (void)get_property_data:(struct Driver_Property_Identity)arg1 qualifier:(NSData *)arg2 data_size:(unsigned int)arg3 reply:(void (^)(int, NSData *))arg4;
- (void)get_property_data_size:(struct Driver_Property_Identity)arg1 qualifier:(NSData *)arg2 reply:(void (^)(int, unsigned int))arg3;
- (void)is_property_settable:(struct Driver_Property_Identity)arg1 reply:(void (^)(int, unsigned char))arg2;
- (void)has_property:(struct Driver_Property_Identity)arg1 reply:(void (^)(unsigned char))arg2;
- (void)retain_reply_for_process_boost:(void (^)(void))arg1;
- (void)unregister_io_buffer:(Core_Audio_XPC_Raw_Transporter *)arg1 reply:(void (^)(int))arg2;
- (void)register_io_buffer:(Core_Audio_XPC_Raw_Transporter *)arg1 reply:(void (^)(int))arg2;
- (void)stop_synchronous_messenger:(unsigned int)arg1 client_id:(unsigned int)arg2 reply:(void (^)(int))arg3;
- (void)start_synchronous_messenger:(unsigned int)arg1 client_id:(unsigned int)arg2 nominal_sample_rate:(double)arg3 io_buffer_frame_size:(unsigned int)arg4 work_group_port:(Core_Audio_XPC_Raw_Transporter *)arg5 io_messenger:(Core_Audio_XPC_Raw_Transporter *)arg6 reply:(void (^)(int))arg7;
- (void)stop_io:(unsigned int)arg1 client_id:(unsigned int)arg2 reply:(void (^)(int))arg3;
- (void)start_io:(unsigned int)arg1 client_id:(unsigned int)arg2 reply:(void (^)(int))arg3;
- (void)object_was_destroyed:(unsigned int)arg1 reply:(void (^)(int))arg2;
- (void)destroy_device:(unsigned int)arg1 reply:(void (^)(int))arg2;
- (void)create_device:(NSDictionary *)arg1 client_id:(unsigned int)arg2 process_id:(int)arg3 is_native_endianess:(_Bool)arg4 bundle_id:(NSString *)arg5 reply:(void (^)(int, unsigned int))arg6;
- (void)remove_device_client:(unsigned int)arg1 client_id:(unsigned int)arg2 process_id:(int)arg3 is_native_endianess:(_Bool)arg4 bundle_id:(NSString *)arg5 reply:(void (^)(int))arg6;
- (void)add_device_client:(unsigned int)arg1 client_id:(unsigned int)arg2 process_id:(int)arg3 is_native_endianess:(_Bool)arg4 bundle_id:(NSString *)arg5 reply:(void (^)(int))arg6;
- (void)abort_device_configuration_change:(unsigned int)arg1 action:(unsigned long long)arg2 change:(unsigned long long)arg3 reply:(void (^)(int))arg4;
- (void)perform_device_configuration_change:(unsigned int)arg1 action:(unsigned long long)arg2 change:(unsigned long long)arg3 reply:(void (^)(int))arg4;
- (void)initialize:(NSXPCListenerEndpoint *)arg1 reply:(void (^)(int))arg2;
@end

