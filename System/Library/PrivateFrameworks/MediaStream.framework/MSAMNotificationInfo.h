/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MediaStream/MediaStream-Structs.h>
@class MSAlertManager, NSString;

@interface MSAMNotificationInfo : NSObject {

	MSAlertManager* _owner;
	NSString* _personID;
	CFUserNotificationRef _userNotification;
	CFRunLoopSourceRef _runLoopSource;
	/*^block*/id _completionBlock;

}

@property (assign,nonatomic,__weak) MSAlertManager * owner;                       //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) NSString * personID;                                 //@synthesize personID=_personID - In the implementation block
@property (assign,nonatomic) CFRunLoopSourceRef runLoopSource; 
@property (assign,nonatomic) CFUserNotificationRef userNotification; 
@property (nonatomic,copy) id completionBlock;                                    //@synthesize completionBlock=_completionBlock - In the implementation block
+(id)info;
-(NSString *)personID;
-(id)completionBlock;
-(void)setOwner:(MSAlertManager *)arg1 ;
-(void)setPersonID:(NSString *)arg1 ;
-(MSAlertManager *)owner;
-(void)setUserNotification:(CFUserNotificationRef)arg1 ;
-(void)setRunLoopSource:(CFRunLoopSourceRef)arg1 ;
-(void)setCompletionBlock:(id)arg1 ;
-(CFRunLoopSourceRef)runLoopSource;
-(CFUserNotificationRef)userNotification;
-(void)dealloc;
@end
