/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CNUIAAfamilyMember : NSObject <NSSecureCoding> {

	BOOL _isMe;
	NSString* _appleID;
	NSString* _firstName;
	NSString* _lastName;

}

@property (nonatomic,copy) NSString * appleID;                //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,copy) NSString * firstName;              //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;               //@synthesize lastName=_lastName - In the implementation block
@property (assign,nonatomic) BOOL isMe;                       //@synthesize isMe=_isMe - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cnuiFamilyMemberWithAAFamilyMember:(id)arg1 ;
-(NSString *)firstName;
-(BOOL)isMe;
-(void)setLastName:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setIsMe:(BOOL)arg1 ;
-(NSString *)lastName;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAppleID:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)appleID;
@end

