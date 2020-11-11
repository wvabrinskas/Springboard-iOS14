/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UserNotificationsKit/UserNotificationsKit-Structs.h>
#import <UserNotificationsKit/NCNotificationSound.h>

@class NSString, NSDictionary, TLAlertConfiguration;

@interface NCMutableNotificationSound : NCNotificationSound

@property (assign,nonatomic) long long soundType; 
@property (assign,nonatomic) unsigned systemSoundID; 
@property (assign,nonatomic) unsigned long long soundBehavior; 
@property (nonatomic,copy) NSString * ringtoneName; 
@property (nonatomic,copy) NSDictionary * vibrationPattern; 
@property (assign,getter=isRepeating,nonatomic) BOOL repeats; 
@property (assign,nonatomic) double maxDuration; 
@property (nonatomic,copy) NSDictionary * controllerAttributes; 
@property (nonatomic,copy) NSString * songPath; 
@property (nonatomic,copy) TLAlertConfiguration * alertConfiguration; 
-(void)setRepeats:(BOOL)arg1 ;
-(void)setSystemSoundID:(unsigned)arg1 ;
-(void)setAlertConfiguration:(TLAlertConfiguration *)arg1 ;
-(void)setRingtoneName:(NSString *)arg1 ;
-(void)setSoundType:(long long)arg1 ;
-(void)setSongPath:(NSString *)arg1 ;
-(void)setSoundBehavior:(unsigned long long)arg1 ;
-(void)setVibrationPattern:(NSDictionary *)arg1 ;
-(void)setMaxDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setControllerAttributes:(NSDictionary *)arg1 ;
@end
