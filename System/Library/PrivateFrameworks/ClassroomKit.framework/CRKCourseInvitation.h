/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class DMFControlGroupIdentifier, NSString, NSData, NSArray;

@interface CRKCourseInvitation : NSObject <NSSecureCoding> {

	DMFControlGroupIdentifier* _courseIdentifier;
	NSString* _courseName;
	NSString* _courseDescription;
	unsigned long long _courseMascotType;
	unsigned long long _courseColorType;
	NSString* _instructorName;
	NSData* _instructorImageData;
	NSArray* _anchorCertificateDatas;

}

@property (nonatomic,copy,readonly) DMFControlGroupIdentifier * courseIdentifier;              //@synthesize courseIdentifier=_courseIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * courseName;                                     //@synthesize courseName=_courseName - In the implementation block
@property (nonatomic,copy,readonly) NSString * courseDescription;                              //@synthesize courseDescription=_courseDescription - In the implementation block
@property (nonatomic,readonly) unsigned long long courseMascotType;                            //@synthesize courseMascotType=_courseMascotType - In the implementation block
@property (nonatomic,readonly) unsigned long long courseColorType;                             //@synthesize courseColorType=_courseColorType - In the implementation block
@property (nonatomic,copy,readonly) NSString * instructorName;                                 //@synthesize instructorName=_instructorName - In the implementation block
@property (nonatomic,copy,readonly) NSData * instructorImageData;                              //@synthesize instructorImageData=_instructorImageData - In the implementation block
@property (nonatomic,copy,readonly) NSArray * anchorCertificateDatas;                          //@synthesize anchorCertificateDatas=_anchorCertificateDatas - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(DMFControlGroupIdentifier *)courseIdentifier;
-(unsigned long long)courseMascotType;
-(unsigned long long)courseColorType;
-(NSString *)courseName;
-(NSString *)courseDescription;
-(id)initWithCourseIdentifier:(id)arg1 courseName:(id)arg2 courseDescription:(id)arg3 instructorName:(id)arg4 instructorImageData:(id)arg5 anchorCertificates:(id)arg6 ;
-(id)initWithCourseIdentifier:(id)arg1 courseName:(id)arg2 courseDescription:(id)arg3 courseMascotType:(unsigned long long)arg4 courseColorType:(unsigned long long)arg5 instructorName:(id)arg6 instructorImageData:(id)arg7 anchorCertificates:(id)arg8 ;
-(id)initWithCourseIdentifier:(id)arg1 courseName:(id)arg2 courseDescription:(id)arg3 courseMascotType:(unsigned long long)arg4 courseColorType:(unsigned long long)arg5 instructorName:(id)arg6 instructorImageData:(id)arg7 anchorCertificateDatas:(id)arg8 ;
-(NSString *)instructorName;
-(NSData *)instructorImageData;
-(NSArray *)anchorCertificateDatas;
-(id)initWithCourseIdentifier:(id)arg1 courseName:(id)arg2 courseDescription:(id)arg3 instructorName:(id)arg4 anchorCertificates:(id)arg5 ;
-(id)initWithCourseIdentifier:(id)arg1 courseName:(id)arg2 courseDescription:(id)arg3 courseMascotType:(unsigned long long)arg4 courseColorType:(unsigned long long)arg5 instructorName:(id)arg6 anchorCertificates:(id)arg7 ;
-(id)initWithCourseIdentifier:(id)arg1 courseName:(id)arg2 courseDescription:(id)arg3 courseMascotType:(unsigned long long)arg4 courseColorType:(unsigned long long)arg5 instructorName:(id)arg6 anchorCertificateDatas:(id)arg7 ;
@end

