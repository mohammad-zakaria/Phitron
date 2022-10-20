import testingcode

def test_get_response():
    assert testingcode.get_response("https://api.nasa.gov/planetary/apod?api_key=DEMO_KEY") == 200
