//
//  S3Signer.h
//  Arq
//
//  Created by Stefan Reitshamer on 12/30/10.
//  Copyright 2010 Haystack Software. All rights reserved.
//




@protocol S3Signer <NSObject, NSCopying>
- (NSString *)sign:(NSString *)theString error:(NSError **)error;
@end
