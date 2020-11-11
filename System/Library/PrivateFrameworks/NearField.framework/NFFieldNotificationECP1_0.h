/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NearField/NFFieldNotification.h>

@interface NFFieldNotificationECP1_0 : NFFieldNotification {

	BOOL _odaRequired;
	unsigned _terminalMode;
	unsigned _terminalType;

}

@property (readonly) BOOL odaRequired;                   //@synthesize odaRequired=_odaRequired - In the implementation block
@property (readonly) unsigned terminalMode;              //@synthesize terminalMode=_terminalMode - In the implementation block
@property (readonly) unsigned terminalType;              //@synthesize terminalType=_terminalType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)terminalType;
-(BOOL)odaRequired;
-(unsigned)terminalMode;
@end
