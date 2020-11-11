/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSUUID, NSString;


@protocol SignpostSupportLoggingSupportArchiveEvent <NSObject>
@property (assign,nonatomic) unsigned long long _machContinuousTimestamp; 
@property (assign,nonatomic) int processID; 
@property (assign,nonatomic) unsigned long long processUniqueID; 
@property (assign,nonatomic) unsigned long long threadID; 
@property (nonatomic,retain) NSUUID * processImageUUID; 
@property (nonatomic,retain) NSString * processImagePath; 
@property (nonatomic,retain) NSString * processName; 
@property (assign,nonatomic) long long tv_sec; 
@property (assign,nonatomic) int tv_usec; 
@property (assign,nonatomic) int tz_minuteswest; 
@property (assign,nonatomic) int tz_dsttime; 
@required
-(void)setProcessName:(id)arg1;
-(void)setProcessID:(int)arg1;
-(NSString *)processName;
-(void)setThreadID:(unsigned long long)arg1;
-(int)processID;
-(NSString *)processImagePath;
-(long long)tv_sec;
-(unsigned long long)threadID;
-(unsigned long long)processUniqueID;
-(NSUUID *)processImageUUID;
-(int)tv_usec;
-(void)set_machContinuousTimestamp:(unsigned long long)arg1;
-(void)setProcessUniqueID:(unsigned long long)arg1;
-(void)setProcessImageUUID:(id)arg1;
-(void)setProcessImagePath:(id)arg1;
-(id)beginWallTimeStringWithTimeZoneName:(id)arg1;
-(id)endWallTimeStringWithTimeZoneName:(id)arg1;
-(unsigned long long)_machContinuousTimestamp;
-(int)tz_minuteswest;
-(int)tz_dsttime;
-(void)setTv_sec:(long long)arg1;
-(void)setTv_usec:(int)arg1;
-(void)setTz_minuteswest:(int)arg1;
-(void)setTz_dsttime:(int)arg1;

@end
