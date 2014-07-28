//
//  UserAndComputer.h
//  Arq
//
//  Created by Stefan Reitshamer on 7/9/10.
//  Copyright 2010 Haystack Software. All rights reserved.
//




@interface UserAndComputer : NSObject {
    NSString *userName;
    NSString *computerName;
}
- (id)init;
- (id)initWithXMLData:(NSData *)theXMLData error:(NSError **)error;
- (id)initWithUserName:(NSString *)theUserName computerName:(NSString *)theComputerName;
- (NSString *)userName;
- (NSString *)computerName;
- (NSData *)toXMLData;
@end
